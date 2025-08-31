#include "BobHurt.hpp"
#include "../../../../Utils/Memory/Game/SignatureAndOffsetManager.hpp"

BobHurtHook::BobHurtHook() : Hook("BobHurt", GET_SIG_ADDRESS("BobHurt")) {}

void BobHurtHook::enableHook() {
    this->autoHook((void *) BobHurtCallback, (void **) &funcOriginal);
}

void BobHurtHook::BobHurtCallback(void *_this, glm::mat4* matrix) {
    // Block the hurt camera effect completely
    return; 
}
