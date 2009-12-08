#include <clutter/clutter.h>
#include "shell-tray-manager.h"

ClutterActor *stage = NULL;

int
main (int argc, char* argv[])
{
	ClutterColor stage_color = { 0xB0, 0xB0, 0xB0, 0xff };

	clutter_init (&argc, &argv);
	stage = clutter_stage_get_default ();
	clutter_actor_set_size (stage, 40, 100);
	clutter_stage_set_color (CLUTTER_STAGE (stage), &stage_color);


	clutter_actor_show (stage);

	clutter_main ();
	return 0;
}
