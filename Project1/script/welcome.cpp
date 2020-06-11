#include <gazebo/gazebo.hh>

namespace gazebo
{
    class WorldPluginMyRobot : public WorldPlugin
    {
        public: WorldPluginMyRobot() : WorldPlugin()
                {
                    printf("Greetings, welcome to Darius's World!\n");
                }

        public: void Load(physics::WorldPtr _theWorldPtr, sdf::ElementPtr _sdf)
                {
                    // Nothing
                }
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
