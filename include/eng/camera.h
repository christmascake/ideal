#ifndef IDEAL_INCLUDE_ENG_CAMERA_H_
#define IDEAL_INCLUDE_ENG_CAMERA_H_

struct ENG_Camera {
	double cam_x;
	double cam_y;

	double zoom;
};

struct ENG_Coordinate {
	double x;
	double y;
};

void ENG_Camera_init(struct ENG_Camera *cam, const double x, const double y,
		     const double zoom);

struct ENG_Coordinate ENG_Camera_world_to_screen(const struct ENG_Camera *cam,
						 const int    win_width,
						 const int    win_height,
						 const double world_x,
						 const double world_y);

#endif
