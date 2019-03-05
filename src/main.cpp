#include "help.cpp"
#include "modules/counter.hpp"
#include "modules/view.hpp"

const String keys =
        "{help h usage ? |             | print this message   }"
        "{@input         | <none>      | input camera/video for counter  }"
        "{w window       |             | show window or not  }"
;

int main(int argc, char* argv[]) {
    CommandLineParser parser(argc, argv, keys);
    parser.about("people counter v0.9.0");

    if (parser.has("help")) {
        parser.printMessage();
        return 0;
    }
    bool show = false;

    String videoPath = parser.get<String>(0);
    if (parser.has("w")) {
        show = true;
    }

    if (!parser.check()) {
        parser.printErrors();
        parser.printMessage();
        return -1;
    }

    VideoCapturePeopleCounter* counter = new VideoCapturePeopleCounter(videoPath);
    if (show) {
        counter->delegate = new WindowController(counter);
    }
    counter->setRefLineY(120);
    counter->start();
}