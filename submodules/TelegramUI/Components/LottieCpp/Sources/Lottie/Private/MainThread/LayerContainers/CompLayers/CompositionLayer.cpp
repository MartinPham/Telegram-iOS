#include "CompositionLayer.hpp"

#include "Lottie/Public/Primitives/RenderTree.hpp"

namespace lottie {

InvertedMatteLayer::InvertedMatteLayer(std::shared_ptr<CompositionLayer> inputMatte) :
_inputMatte(inputMatte) {
    setBounds(inputMatte->bounds());
    
    addSublayer(_inputMatte);
}

std::shared_ptr<InvertedMatteLayer> makeInvertedMatteLayer(std::shared_ptr<CompositionLayer> compositionLayer) {
    auto result = std::make_shared<InvertedMatteLayer>(compositionLayer);
    return result;
}

}