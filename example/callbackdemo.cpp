#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>
#include <nlohmann/json.hpp>
#include <fstream>

#ifndef M_PI
#define M_PI 3.141592653589793238462643383279502884197169399375105820974944
#endif

#ifndef M_PI_2
#define M_PI_2 (M_PI / 2.0)
#endif

#ifndef M_2PI
#define M_2PI (2.0 * M_PI)
#endif

#define DEG_TO_RAD (M_PI / 180.0)
#define RAD_TO_DEG (180.0 / M_PI)

int main()
{
    using json = nlohmann::json;
    const std::string &config_path("./config.json");
    std::ifstream file(config_path);
    json config;
    file >> config;
    file.close();
    config = config["c_corner"];

    std::cout << DEG_TO_RAD << std::endl;
    std::cout << config["detect_roi_right"]["angle"] << std::endl;
    auto d = config["detect_roi_right"]["angle"].get<double>();
    std::cout << d * DEG_TO_RAD << std::endl;
    std::cout << config["detect_roi_left"]["angle"] << std::endl;
    std::cout << config["detect_roi_left"]["angle"] * DEG_TO_RAD << std::endl;
    

    return 0;
}