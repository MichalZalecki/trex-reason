// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

var Caml_int32 = require("bs-platform/lib/js/caml_int32.js");

function init() {
  var game = document.querySelector("#game");
  var canvas = document.createElement("canvas");
  var context = canvas.getContext("2d");
  canvas.width = window.innerWidth;
  canvas.height = 150;
  game.appendChild(canvas);
  return context;
}

function getSprite() {
  var image = document.createElement("img");
  image.src = "/src/sprite.png";
  return image;
}

function getTrexFrame(world) {
  var match = +(world[/* trex */2][/* state */0] === "jumping");
  var frameOffset = match !== 0 ? -2 : Caml_int32.div(world[/* t */0], world[/* dt */1]) % 28 / 14 | 0;
  var isDucking = +(world[/* trex */2][/* state */0] === "ducking");
  var size = isDucking !== 0 ? world[/* trex */2][/* duckingSize */3] : world[/* trex */2][/* size */1];
  var imgPos = isDucking !== 0 ? world[/* trex */2][/* duckingImgPos */4] : world[/* trex */2][/* imgPos */2];
  return /* record */[
          /* width */size[/* width */0],
          /* height */size[/* height */1],
          /* x */(imgPos[/* x */0] + frameOffset | 0) + size[/* width */0] | 0,
          /* y */imgPos[/* y */1]
        ];
}

function renderTrex(context, world) {
  var image = getSprite(/* () */0);
  var source = getTrexFrame(world);
  context.drawImage(image, source[/* x */2], source[/* y */3], source[/* width */0], source[/* height */1], 100, 100, source[/* width */0], source[/* height */1]);
  return /* () */0;
}

var render = renderTrex;

var height = 150;

exports.height       = height;
exports.init         = init;
exports.getSprite    = getSprite;
exports.getTrexFrame = getTrexFrame;
exports.renderTrex   = renderTrex;
exports.render       = render;
/* No side effect */