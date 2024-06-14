
#include "/app/ContactForm.h"
#include "/matertial/MaterialWidgetFactory.h"

int main() {

    ContactForm contactForm;
    MaterialWidgetFactory factory;
    contactForm.render(&factory);

    return 0;
}
