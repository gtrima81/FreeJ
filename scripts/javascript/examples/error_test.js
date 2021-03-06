/*  FreeJ example scripts
 *  (c) Copyright 2005 Christoph Rudorff aka MrGoil <goil@dyne.org>
 *
 * This source code is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Public License as published 
 * by the Free Software Foundation; either version 3 of the License,
 * or (at your option) any later version.
 *
 * This source code is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * Please refer to the GNU Public License for more details.
 *
 * You should have received a copy of the GNU Public License along with
 * this source code; if not, write to:
 * Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

/*
Example how to handle errors in js and freej

run with -D3 and/or -c to see the mess

*/


var cam = new Array();
function do_cam(n) {
    var cam_obj = null;
    if (cam[n]) {
        echo("delete cam"+n);
        cam_obj = cam[n];
        echo("file: " + cam_obj.get_filename());
        rem_layer(cam_obj);
        cam[n] = null;
        delete (cam_obj); // FIXME: destructor still not called
    } else {
        file = "/dev/video" + n;
        echo("open cam" + n + " " + file);    
        try {
            cam_obj = new CamLayer(320, 240, file);
        } catch (e) {
            echo ("camExp: " + dumpex(e) );
        }
        if (cam_obj) {
            echo("cam obj: " + cam_obj);
            add_layer(cam_obj);
            cam[n] = cam_obj;
        } else{
            echo("cam failed");
        }
    }
}

// dump Exception
// props: message fileName lineNumber stack name
function dumpex(e) {
    var msg = "Dump ex: ";
    for (prop in e) {
        msg += "'"+prop + "'='" + e[prop]+"', ";
    }
    return msg;
}
        
mkbd = new KeyboardController();
register_controller(mkbd);
mkbd.released_q = function() { quit(); }
mkbd.released_c = function() { include("cynosure.js"); }
mkbd.released_p = function() { include("pan_joy.js"); }
mkbd.released_1 = function() { do_cam(0); }
mkbd.released_2 = function() { do_cam(1); }
mkbd.released_3 = function() { echo("\n\n\nSPAM SPAM\n\n"); }

mkbd.released_0 = function() { 
    echo("test bad geo layer");
    try {
        echo("try");
        g=new GeometryLayer(30,30,90,90); // freej object
        echo("\n got geo layer: " + g);
    } catch (e) {
        echo ("Exp: " + dumpex(e) );
    }
    echo("test end");
}
mkbd.released_9 = function() { 
    echo("test bad Array");
    try {
        echo("try");
        g=new Array(-90); // js core object
        echo("\n ok got : " + g);
    } catch (e) {
        echo ("Exp: " + dumpex(e) );
    }
    echo("test end");
}

mkbd.released_s = function() { 
    echo("now making unhandled exception:");    
    g=new GeometryLayer(30,30,90,90);
    echo("done (or not ...)");    
}
