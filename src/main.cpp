#include <string>
#include <iostream>

#include "formatting.hpp"


int main() {
    std::string myTitle{ "I am totally centered!" };
    std::string leftText{ "I am totally to the left." };
    std::string rightText{ "I am totally to the right." };
    std::string myGargantuanString{ "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi eu interdum leo, at congue libero. Mauris pretium lacus dignissim, congue justo id, bibendum nisl. Integer nunc eros, imperdiet fermentum nunc vel, accumsan pretium odio. Integer id est augue. Donec vel velit nec nulla hendrerit dapibus tincidunt malesuada quam. Donec eu quam vitae orci rhoncus molestie. Nullam placerat efficitur nulla, vitae rhoncus sapien dictum id.\nVestibulum eu nisl justo. Quisque non blandit lacus, nec tempus justo. Praesent vulputate massa in tellus lobortis pulvinar. Aliquam et tincidunt lacus. Praesent imperdiet est nec mattis auctor. Nulla volutpat mauris sed nulla cursus maximus. Morbi vel fringilla ex, et auctor diam. Integer ac ultricies libero. Fusce in nulla ligula. Duis at mattis orci. Pellentesque pulvinar dictum ipsum, sit amet aliquet est mollis nec. Praesent vitae venenatis felis. Aliquam quis volutpat nisi, nec imperdiet lectus. Nam sed massa et enim feugiat tristique sit amet ut risus. Vivamus sagittis quam vitae mauris consequat, in sagittis sem bibendum. Duis et venenatis dui, nec bibendum dui.\nInteger neque augue, laoreet vitae arcu vel, porttitor molestie tellus. In lorem est, hendrerit ac nunc nec, varius hendrerit massa. Proin placerat sed ipsum vitae aliquam. Nunc varius dui et luctus vestibulum. Morbi vulputate, mauris imperdiet maximus euismod, neque eros laoreet odio, posuere mattis risus justo et purus. Sed tristique scelerisque mauris, sed porta sem. Vestibulum ac placerat nunc. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Phasellus imperdiet sed arcu ut ornare. Proin vehicula pellentesque nulla, nec sagittis ligula laoreet quis. Mauris nisl lorem, porttitor sed sodales et, molestie vel tortor. Fusce pellentesque, lacus vitae volutpat eleifend, enim lacus commodo eros, ornare fermentum nibh purus non metus." };

    std::cout << TextPowertools::alignCenter(myTitle) << '\n';
    std::cout << TextPowertools::alignLeft(leftText) << '\n';
    std::cout << TextPowertools::alignRight(rightText) << '\n';
    std::cout << TextPowertools::textWrapRaw(myGargantuanString, 79, true);

    return 0;
}
