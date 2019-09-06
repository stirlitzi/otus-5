
#include "View.h"
#include "Model.h"

DocumentView::DocumentView(const DocumentModel &model_) : model(model_) {
    render();
}


void DocumentView::render() {
    std::cout << "rendering document ...." << std::endl;
   const auto& view_data_ = model.get_model_view();
    if(view_data_.empty())
        std::cout << "empty figures" << std::endl;
    else {
        for (auto& figure: model.get_model_view())
            std::cout << figure << "\n";
    }
}
