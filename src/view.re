type frame = {
  width: int,
  height: int,
  x: int,
  y: int,
};

let height = 150;

let init = () => {
  let game = Document.querySelector("#game");
  let canvas = Document.createElement("canvas");
  let context = Document.getContext(canvas, "2d");

  Document.window |> Document.getInnerWidth |> Document.setWidth(canvas);
  Document.setHeight(canvas, height);
  Document.appendChild(game, canvas);

  context
};

let getSprite = () => {
  let image = Document.createElement("img");
  Document.setSrc(image, "/src/sprite.png");
  image
};

let getTrexFrame = (world: Game.world) => {
  let dtPerFrame = 14;
  let frameOffset = world.trex.state === "jumping" ? -2 : world.t / world.dt mod (2 * dtPerFrame) / dtPerFrame;
  let isDucking = world.trex.state === "ducking";
  let size = isDucking ? world.trex.duckingSize : world.trex.size;
  let imgPos = isDucking ? world.trex.duckingImgPos : world.trex.imgPos;
  { x: imgPos.x + frameOffset + size.width, y: imgPos.y, width: size.width, height: size.height }
};

let renderTrex = (context: Document.canvasRenderingContext2D, world: Game.world) => {
  let image = getSprite();
  let source = getTrexFrame(world);
  Document.drawImage(
    context,
    image,
    source.x,
    source.y,
    source.width,
    source.height,
    100,
    100,
    source.width,
    source.height
  );
};

let render(context: Document.canvasRenderingContext2D, world: Game.world) {
  renderTrex(context, world);
}
