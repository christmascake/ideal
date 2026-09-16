#include "camera.h"

void AUX_Camera_init(struct AUX_Camera *cam, const double x, const double y,
		     const double zoom)
{
	cam->cam_x = x;
	cam->cam_y = y;
	cam->zoom  = zoom;
}

struct AUX_Coordinate AUX_Camera_world_to_screen(const struct AUX_Camera *cam,
						 const int    win_width,
						 const int    win_height,
						 const double world_x,
						 const double world_y)
{
	struct AUX_Coordinate ret;

	double offset_x = (world_x - cam->cam_x) * cam->zoom;
	double offset_y = (world_y - cam->cam_y) * cam->zoom;

	ret.x = (double)(win_width / 2.0 + offset_x);
	ret.y = (double)(win_height / 2.0 - offset_y);

	return ret;
}
