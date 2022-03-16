function sides(literals, ...expressions) {
  const area = expressions[0];
  const perimeter = expressions[1];
  const root = Math.sqrt(Math.pow(perimeter, 2) - 16 * area);
  const strings = [(perimeter + root) / 4, (perimeter - root) / 4].sort();
  return strings;
}
