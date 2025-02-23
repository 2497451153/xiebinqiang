共82条
void HAL_I2C_AbortCpltCallback(I2C_HandleTypeDef* hi2c)//I2C中断完成回调函数
void HAL_I2C_AddrCallback(I2C_HandleTypeDef* hi2c, uint8_t TransferDirection, uint16_t AddrMatchCode)//I2C地址匹配回调函数
HAL_StatusTypeDef HAL_I2C_DeInit(I2C_HandleTypeDef* hi2c)//解除I2C外设初始化函数
HAL_StatusTypeDef HAL_I2C_Init(I2C_HandleTypeDef* hi2c)//初始化I2C外设函数
HAL_StatusTypeDef HAL_I2C_DisableListen_IT(I2C_HandleTypeDef* hi2c)//禁止I2C监听中断函数
HAL_StatusTypeDef HAL_I2C_EnableListen_IT(I2C_HandleTypeDef* hi2c)//使能I2C监听中断函数
void HAL_I2C_ER_IRQHandler(I2C_HandleTypeDef* hi2c)//I2C错误中断处理函数
void HAL_I2C_ErrorCallback(I2C_HandleTypeDef* hi2c)//I2C错误回调函数
void HAL_I2C_EV_IRQHandler(I2C_HandleTypeDef* hi2c)//I2C事件中断处理函数
uint32_t HAL_I2C_GetError(I2C_HandleTypeDef* hi2c)//获取I2C错误状态函数
HAL_I2C_ModeTypeDef HAL_I2C_GetMode(I2C_HandleTypeDef* hi2c)//获取I2C模式函数
HAL_I2C_StateTypeDef HAL_I2C_GetState(I2C_HandleTypeDef* hi2c)//获取I2C状态函数
HAL_StatusTypeDef HAL_I2C_IsDeviceReady(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint32_t Trials, uint32_t Timeout)//I2C设备是否就绪函数
void HAL_I2C_ListenCpltCallback(I2C_HandleTypeDef* hi2c)//I2C监听完成回调函数
/*I2C主机操作*/*/
HAL_StatusTypeDef HAL_I2C_Master_Abort_IT(I2C_HandleTypeDef* hi2c, uint16_t DevAddress)//I2C主机中止中断函数
HAL_StatusTypeDef HAL_I2C_Master_Receive(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size, uint32_t Timeout)//I2C主机接收函数
HAL_StatusTypeDef HAL_I2C_Master_Receive_DMA(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size)//I2C主机接收DMA函数
HAL_StatusTypeDef HAL_I2C_Master_Receive_IT(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size)//I2C主机接收中断函数
HAL_StatusTypeDef HAL_I2C_Master_Seq_Receive_DMA(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C主机连续接收DMA函数
HAL_StatusTypeDef HAL_I2C_Master_Seq_Receive_IT(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C主机连续接收中断函数
HAL_StatusTypeDef HAL_I2C_Master_Seq_Transmit_DMA(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C主机连续发送DMA函数
HAL_StatusTypeDef HAL_I2C_Master_Seq_Transmit_IT(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C主机连续发送中断函数
HAL_StatusTypeDef HAL_I2C_Master_Transmit(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size, uint32_t Timeout)//I2C主机发送函数
HAL_StatusTypeDef HAL_I2C_Master_Transmit_DMA(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size)//I2C主机发送DMA函数
HAL_StatusTypeDef HAL_I2C_Master_Transmit_IT(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size)//I2C主机发送中断函数
void HAL_I2C_MasterRxCpltCallback(I2C_HandleTypeDef* hi2c)//I2C主机接收完成回调函数
void HAL_I2C_MasterTxCpltCallback(I2C_HandleTypeDef* hi2c)//I2C主机发送完成回调函数
/*I2C内存操作*/*/
HAL_StatusTypeDef HAL_I2C_Mem_Read(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t* pData, uint16_t Size, uint32_t Timeout)//I2C内存读取函数
HAL_StatusTypeDef HAL_I2C_Mem_Read_DMA(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t* pData, uint16_t Size)//I2C内存读取DMA函数
HAL_StatusTypeDef HAL_I2C_Mem_Read_IT(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t* pData, uint16_t Size)//I2C内存读取中断函数
HAL_StatusTypeDef HAL_I2C_Mem_Write(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t* pData, uint16_t Size, uint32_t Timeout)//I2C内存写入函数
HAL_StatusTypeDef HAL_I2C_Mem_Write_DMA(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t* pData, uint16_t Size)//I2C内存写入DMA函数
HAL_StatusTypeDef HAL_I2C_Mem_Write_IT(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t* pData, uint16_t Size)//I2C内存写入中断函数
void HAL_I2C_MemRxCpltCallback(I2C_HandleTypeDef* hi2c)//I2C内存读取完成回调函数
void HAL_I2C_MemTxCpltCallback(I2C_HandleTypeDef* hi2c)//I2C内存写入完成回调函数
void HAL_I2C_MspDeInit(I2C_HandleTypeDef* hi2c)//解除I2C外设时钟初始化函数
void HAL_I2C_MspInit(I2C_HandleTypeDef* hi2c)//I2C外设时钟初始化函数
HAL_StatusTypeDef HAL_I2C_RegisterAddrCallback(I2C_HandleTypeDef* hi2c, pI2C_AddrCallbackTypeDef pCallback)//I2C地址匹配回调注册函数
HAL_StatusTypeDef HAL_I2C_RegisterCallback(I2C_HandleTypeDef* hi2c, HAL_I2C_CallbackIDTypeDef CallbackID, pI2C_CallbackTypeDef pCallback)//I2C中断回调注册函数
/*I2C从机操作*/
HAL_StatusTypeDef HAL_I2C_Slave_Receive(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size, uint32_t Timeout)//I2C从机接收函数
HAL_StatusTypeDef HAL_I2C_Slave_Receive_DMA(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size)//I2C从机接收DMA函数
HAL_StatusTypeDef HAL_I2C_Slave_Receive_IT(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size)//I2C从机接收中断函数
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Receive_DMA(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C从机连续接收DMA函数
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Receive_IT(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C从机连续接收中断函数
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Transmit_DMA(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C从机连续发送DMA函数
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Transmit_IT(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C从机连续发送中断函数
HAL_StatusTypeDef HAL_I2C_Slave_Transmit(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size, uint32_t Timeout)//I2C从机发送函数
HAL_StatusTypeDef HAL_I2C_Slave_Transmit_DMA(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size)//I2C从机发送DMA函数
HAL_StatusTypeDef HAL_I2C_Slave_Transmit_IT(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size)//I2C从机发送中断函数
void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef* hi2c)//I2C从机接收完成回调函数
void HAL_I2C_SlaveTxCpltCallback(I2C_HandleTypeDef* hi2c)//I2C从机发送完成回调函数
HAL_StatusTypeDef HAL_I2C_UnRegisterAddrCallback(I2C_HandleTypeDef* hi2c)//I2C地址匹配回调注销函数
HAL_StatusTypeDef HAL_I2C_UnRegisterCallback(I2C_HandleTypeDef* hi2c, HAL_I2C_CallbackIDTypeDef CallbackID)//I2C中断回调注销函数
void I2C_ConvertOtherXferOptions(I2C_HandleTypeDef* hi2c)//I2C其他传输选项转换函数
void I2C_Disable_IRQ(I2C_HandleTypeDef* hi2c, uint16_t InterruptRequest)//I2C禁止中断函数
void I2C_DMAAbort(DMA_HandleTypeDef* hdma)//I2C DMA中止函数
void I2C_DMAError(DMA_HandleTypeDef* hdma)//I2C DMA错误函数
void I2C_DMAMasterReceiveCplt(DMA_HandleTypeDef* hdma)//I2C DMA主机接收完成函数
void I2C_DMAMasterTransmitCplt(DMA_HandleTypeDef* hdma)//I2C DMA主机发送完成函数
void I2C_DMASlaveReceiveCplt(DMA_HandleTypeDef* hdma)//I2C DMA从机接收完成函数
void I2C_DMASlaveTransmitCplt(DMA_HandleTypeDef* hdma)//I2C DMA从机发送完成函数
void I2C_Enable_IRQ(I2C_HandleTypeDef* hi2c, uint16_t InterruptRequest)//I2C使能中断函数
void I2C_Flush_TXDR(I2C_HandleTypeDef* hi2c)//I2C清空TXDR函数
HAL_StatusTypeDef I2C_IsAcknowledgeFailed(I2C_HandleTypeDef* hi2c, uint32_t Timeout, uint32_t Tickstart)//I2C ACK失败判断函数
void I2C_ITAddrCplt(I2C_HandleTypeDef* hi2c, uint32_t ITFlags)//I2C地址匹配完成中断函数
void I2C_ITError(I2C_HandleTypeDef* hi2c, uint32_t ErrorCode)//I2C错误中断函数
void I2C_ITListenCplt(I2C_HandleTypeDef* hi2c, uint32_t ITFlags)//I2C监听完成中断函数
void I2C_ITMasterCplt(I2C_HandleTypeDef* hi2c, uint32_t ITFlags)//I2C主机中断完成中断函数
void I2C_ITMasterSeqCplt(I2C_HandleTypeDef* hi2c)//I2C主机连续传输完成中断函数
void I2C_ITSlaveCplt(I2C_HandleTypeDef* hi2c, uint32_t ITFlags)//I2C从机中断完成中断函数
void I2C_ITSlaveSeqCplt(I2C_HandleTypeDef* hi2c)//I2C从机连续传输完成中断函数
HAL_StatusTypeDef I2C_Master_ISR_DMA(struct __I2C_HandleTypeDef* hi2c, uint32_t ITFlags, uint32_t ITSources)//I2C主机DMA中断服务函数
HAL_StatusTypeDef I2C_Master_ISR_IT(struct __I2C_HandleTypeDef* hi2c, uint32_t ITFlags, uint32_t ITSources)//I2C主机中断服务函数
HAL_StatusTypeDef I2C_RequestMemoryRead(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint32_t Timeout, uint32_t Tickstart)//I2C内存读取请求函数
HAL_StatusTypeDef I2C_RequestMemoryWrite(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint32_t Timeout, uint32_t Tickstart)//I2C内存写入请求函数
HAL_StatusTypeDef I2C_Slave_ISR_DMA(struct __I2C_HandleTypeDef* hi2c, uint32_t ITFlags, uint32_t ITSources)//I2C从机DMA中断服务函数
HAL_StatusTypeDef I2C_Slave_ISR_IT(struct __I2C_HandleTypeDef* hi2c, uint32_t ITFlags, uint32_t ITSources)//I2C从机中断服务函数
void I2C_TransferConfig(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t Size, uint32_t Mode, uint32_t Request)//I2C传输配置函数
HAL_StatusTypeDef I2C_WaitOnFlagUntilTimeout(I2C_HandleTypeDef* hi2c, uint32_t Flag, FlagStatus Status, uint32_t Timeout, uint32_t Tickstart)//I2C等待标志函数
HAL_StatusTypeDef I2C_WaitOnRXNEFlagUntilTimeout(I2C_HandleTypeDef* hi2c, uint32_t Timeout, uint32_t Tickstart)//I2C等待接收数据空中断函数
HAL_StatusTypeDef I2C_WaitOnSTOPFlagUntilTimeout(I2C_HandleTypeDef* hi2c, uint32_t Timeout, uint32_t Tickstart)//I2C等待停止标志函数
HAL_StatusTypeDef I2C_WaitOnTXISFlagUntilTimeout(I2C_HandleTypeDef* hi2c, uint32_t Timeout, uint32_t Tickstart)//I2C等待发送数据空中断函数
