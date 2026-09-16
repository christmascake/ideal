#ifndef IDEAL_INCLUDE_AUX_CAMERA_H_
#define IDEAL_INCLUDE_AUX_CAMERA_H_

struct AUX_Camera {
	double cam_x;
	double cam_y;

	double zoom;
};

struct AUX_Coordinate {
	double x;
	double y;
};

void AUX_Camera_init(struct AUX_Camera *cam, const double x, const double y,
		     const double zoom);

struct AUX_Coordinate AUX_Camera_world_to_screen(const struct AUX_Camera *cam,
						 const int    win_width,
						 const int    win_height,
						 const double world_x,
						 const double world_y);

#endif
