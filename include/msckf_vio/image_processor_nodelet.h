/*
 * COPYRIGHT AND PERMISSION NOTICE
 * Penn Software MSCKF_VIO
 * Copyright (C) 2017 The Trustees of the University of Pennsylvania
 * All rights reserved.
 */

#ifndef IMAGE_PROCESSOR_NODELET_H
#define IMAGE_PROCESSOR_NODELET_H

#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>
#include <msckf_vio/image_processor.h>

namespace msckf_vio {
class ImageProcessorNodelet : public nodelet::Nodelet { //继承父类nodelet::Nodelet
public:
  ImageProcessorNodelet() { return; }
  ~ImageProcessorNodelet() { return; }

private:
  virtual void onInit(); // 重载虚函数，启动时自动调用
  ImageProcessorPtr img_processor_ptr;
};
} // end namespace msckf_vio

#endif

