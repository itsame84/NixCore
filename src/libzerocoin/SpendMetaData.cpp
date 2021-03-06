/**
* @file       SpendMetaData.cpp
*
* @brief      SpendMetaData class for the Zerocoin library.
*
* @author     Ian Miers, Christina Garman and Matthew Green
* @date       June 2013
*
* @copyright  Copyright 2013 Ian Miers, Christina Garman and Matthew Green
* @license    This project is released under the MIT license.
**/

#include "libzerocoin/Zerocoin.h"

namespace libzerocoin {

SpendMetaData::SpendMetaData(arith_uint256 accumulatorId, uint256 txHash): accumulatorId(accumulatorId), txHash(txHash) {}

} /* namespace libzerocoin */
