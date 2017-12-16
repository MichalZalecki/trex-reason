let context = View.init();
let world: Game.world = {
  t: 1000,
  dt: 100,
  trex: {
    state: "running",
    size: { width: 44, height: 47 },
    imgPos: { x: 890, y: 2 },
    duckingSize: { width: 59, height: 32 },
    duckingImgPos: { x: 1112, y: 19 }
  }
};

let tick = () => {
  View.render(context, world);
};

tick();
Document.setInterval(tick, 20);
