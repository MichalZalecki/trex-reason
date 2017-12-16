type canvasRenderingContext2D;

[@bs.val] external document : Dom.document = "";
[@bs.val] external window : Dom.window = "";
[@bs.val][@bs.scope "document"] external querySelector : string => Dom.element = "";
[@bs.val][@bs.scope "document"] external createElement : string => Dom.element = "";
[@bs.val] external setInterval : (unit => unit) => int => unit = "";
[@bs.set] external setWidth : Dom.element => int => unit = "width";
[@bs.set] external setHeight : Dom.element => int => unit = "height";
[@bs.set] external setSrc : Dom.element => string => unit = "src";
[@bs.get] external getInnerWidth : Dom.window => int = "innerWidth";
[@bs.get] external getInnerHeight : Dom.window => int = "innerHeight";
[@bs.send] external appendChild : Dom.element => Dom.element => unit = "";
[@bs.send] external getContext : Dom.element => string => canvasRenderingContext2D = "";
[@bs.send] external drawImage : canvasRenderingContext2D => Dom.element => int => int => int => int => int => int => int => int => unit = "";
