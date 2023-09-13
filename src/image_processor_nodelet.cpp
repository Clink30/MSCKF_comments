/*
 * COPYRIGHT AND PERMISSION NOTICE
 * Penn Software MSCKF_VIO
 * Copyright (C) 2017 The Trustees of the University of Pennsylvania
 * All rights reserved.
 */

#include <msckf_vio/image_processor_nodelet.h>

namespace msckf_vio
{
// // 重载虚函数，启动时自动调用
void ImageProcessorNodelet::onInit()
{
    img_processor_ptr.reset(new ImageProcessor(getPrivateNodeHandle()));
    if (!img_processor_ptr->initialize())
    {
        ROS_ERROR("Cannot initialize Image Processor...");
        return;
    }
    return;
}
// nodelet的本质是把节点作为插件来调用，因此需要PLUGINLIB的宏定义
// 第一个参数是类名，第二个参数是父类
PLUGINLIB_EXPORT_CLASS(msckf_vio::ImageProcessorNodelet, nodelet::Nodelet);

} // end namespace msckf_vio
