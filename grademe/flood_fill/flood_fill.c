typedef struct  s_point
{
  int           x;
  int           y;
}               t_point;

void	fill(char **tab, t_point size, t_point cur, char c)
{
	if (cur.y < 0 || cur.x < 0 || cur.y >= size.y || cur.x >= size.x || tab[cur.y][cur.x] != c)
		return;

	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.x - 1, cur.y}, c);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, c);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, c);
	fill(tab, size, (t_point){cur.x, cur.y + 1}, c);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
