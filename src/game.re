type vector = {
  x: int,
  y: int,
};

type size = {
  width: int,
  height: int,
};

type trex = {
  state: string,
  size: size,
  imgPos: vector,
  duckingSize: size,
  duckingImgPos: vector,
};

type world = {
  t: int,
  dt: int,
  trex: trex,
};
