#pragma once

#include "PlatformEvents.h"

class PlatformWindow;

/**
 * Event handler interface, to be implemented in user code.
 *
 * @see PlatformEventLoop
 */
class PlatformEventHandler {
 public:
    virtual ~PlatformEventHandler() = default;

    /**
     * @param window                    Platform window that generated the event.
     * @param event                     Event.
     */
    virtual void Event(const PlatformEvent *event);

 protected:
    virtual void KeyPressEvent(const PlatformKeyEvent *event);
    virtual void KeyReleaseEvent(const PlatformKeyEvent *event);
    virtual void MouseMoveEvent(const PlatformMouseEvent *event);
    virtual void MousePressEvent(const PlatformMouseEvent *event);
    virtual void MouseReleaseEvent(const PlatformMouseEvent *event);
    virtual void WheelEvent(const PlatformWheelEvent *event);
    virtual void MoveEvent(const PlatformMoveEvent *event);
    virtual void ResizeEvent(const PlatformResizeEvent *event);
    virtual void ActivationEvent(const PlatformWindowEvent *event);
    virtual void CloseEvent(const PlatformWindowEvent *event);
    virtual void GamepadDeviceEvent(const PlatformGamepadDeviceEvent *event);
    virtual void NativeEvent(const PlatformNativeEvent *event);
};
