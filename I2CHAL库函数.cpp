��82��
void HAL_I2C_AbortCpltCallback(I2C_HandleTypeDef* hi2c)//I2C�ж���ɻص�����
void HAL_I2C_AddrCallback(I2C_HandleTypeDef* hi2c, uint8_t TransferDirection, uint16_t AddrMatchCode)//I2C��ַƥ��ص�����
HAL_StatusTypeDef HAL_I2C_DeInit(I2C_HandleTypeDef* hi2c)//���I2C�����ʼ������
HAL_StatusTypeDef HAL_I2C_Init(I2C_HandleTypeDef* hi2c)//��ʼ��I2C���躯��
HAL_StatusTypeDef HAL_I2C_DisableListen_IT(I2C_HandleTypeDef* hi2c)//��ֹI2C�����жϺ���
HAL_StatusTypeDef HAL_I2C_EnableListen_IT(I2C_HandleTypeDef* hi2c)//ʹ��I2C�����жϺ���
void HAL_I2C_ER_IRQHandler(I2C_HandleTypeDef* hi2c)//I2C�����жϴ�����
void HAL_I2C_ErrorCallback(I2C_HandleTypeDef* hi2c)//I2C����ص�����
void HAL_I2C_EV_IRQHandler(I2C_HandleTypeDef* hi2c)//I2C�¼��жϴ�����
uint32_t HAL_I2C_GetError(I2C_HandleTypeDef* hi2c)//��ȡI2C����״̬����
HAL_I2C_ModeTypeDef HAL_I2C_GetMode(I2C_HandleTypeDef* hi2c)//��ȡI2Cģʽ����
HAL_I2C_StateTypeDef HAL_I2C_GetState(I2C_HandleTypeDef* hi2c)//��ȡI2C״̬����
HAL_StatusTypeDef HAL_I2C_IsDeviceReady(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint32_t Trials, uint32_t Timeout)//I2C�豸�Ƿ��������
void HAL_I2C_ListenCpltCallback(I2C_HandleTypeDef* hi2c)//I2C������ɻص�����
/*I2C��������*/*/
HAL_StatusTypeDef HAL_I2C_Master_Abort_IT(I2C_HandleTypeDef* hi2c, uint16_t DevAddress)//I2C������ֹ�жϺ���
HAL_StatusTypeDef HAL_I2C_Master_Receive(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size, uint32_t Timeout)//I2C�������պ���
HAL_StatusTypeDef HAL_I2C_Master_Receive_DMA(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size)//I2C��������DMA����
HAL_StatusTypeDef HAL_I2C_Master_Receive_IT(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size)//I2C���������жϺ���
HAL_StatusTypeDef HAL_I2C_Master_Seq_Receive_DMA(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C������������DMA����
HAL_StatusTypeDef HAL_I2C_Master_Seq_Receive_IT(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C�������������жϺ���
HAL_StatusTypeDef HAL_I2C_Master_Seq_Transmit_DMA(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C������������DMA����
HAL_StatusTypeDef HAL_I2C_Master_Seq_Transmit_IT(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C�������������жϺ���
HAL_StatusTypeDef HAL_I2C_Master_Transmit(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size, uint32_t Timeout)//I2C�������ͺ���
HAL_StatusTypeDef HAL_I2C_Master_Transmit_DMA(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size)//I2C��������DMA����
HAL_StatusTypeDef HAL_I2C_Master_Transmit_IT(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t* pData, uint16_t Size)//I2C���������жϺ���
void HAL_I2C_MasterRxCpltCallback(I2C_HandleTypeDef* hi2c)//I2C����������ɻص�����
void HAL_I2C_MasterTxCpltCallback(I2C_HandleTypeDef* hi2c)//I2C����������ɻص�����
/*I2C�ڴ����*/*/
HAL_StatusTypeDef HAL_I2C_Mem_Read(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t* pData, uint16_t Size, uint32_t Timeout)//I2C�ڴ��ȡ����
HAL_StatusTypeDef HAL_I2C_Mem_Read_DMA(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t* pData, uint16_t Size)//I2C�ڴ��ȡDMA����
HAL_StatusTypeDef HAL_I2C_Mem_Read_IT(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t* pData, uint16_t Size)//I2C�ڴ��ȡ�жϺ���
HAL_StatusTypeDef HAL_I2C_Mem_Write(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t* pData, uint16_t Size, uint32_t Timeout)//I2C�ڴ�д�뺯��
HAL_StatusTypeDef HAL_I2C_Mem_Write_DMA(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t* pData, uint16_t Size)//I2C�ڴ�д��DMA����
HAL_StatusTypeDef HAL_I2C_Mem_Write_IT(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t* pData, uint16_t Size)//I2C�ڴ�д���жϺ���
void HAL_I2C_MemRxCpltCallback(I2C_HandleTypeDef* hi2c)//I2C�ڴ��ȡ��ɻص�����
void HAL_I2C_MemTxCpltCallback(I2C_HandleTypeDef* hi2c)//I2C�ڴ�д����ɻص�����
void HAL_I2C_MspDeInit(I2C_HandleTypeDef* hi2c)//���I2C����ʱ�ӳ�ʼ������
void HAL_I2C_MspInit(I2C_HandleTypeDef* hi2c)//I2C����ʱ�ӳ�ʼ������
HAL_StatusTypeDef HAL_I2C_RegisterAddrCallback(I2C_HandleTypeDef* hi2c, pI2C_AddrCallbackTypeDef pCallback)//I2C��ַƥ��ص�ע�ắ��
HAL_StatusTypeDef HAL_I2C_RegisterCallback(I2C_HandleTypeDef* hi2c, HAL_I2C_CallbackIDTypeDef CallbackID, pI2C_CallbackTypeDef pCallback)//I2C�жϻص�ע�ắ��
/*I2C�ӻ�����*/
HAL_StatusTypeDef HAL_I2C_Slave_Receive(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size, uint32_t Timeout)//I2C�ӻ����պ���
HAL_StatusTypeDef HAL_I2C_Slave_Receive_DMA(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size)//I2C�ӻ�����DMA����
HAL_StatusTypeDef HAL_I2C_Slave_Receive_IT(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size)//I2C�ӻ������жϺ���
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Receive_DMA(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C�ӻ���������DMA����
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Receive_IT(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C�ӻ����������жϺ���
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Transmit_DMA(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C�ӻ���������DMA����
HAL_StatusTypeDef HAL_I2C_Slave_Seq_Transmit_IT(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size, uint32_t XferOptions)//I2C�ӻ����������жϺ���
HAL_StatusTypeDef HAL_I2C_Slave_Transmit(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size, uint32_t Timeout)//I2C�ӻ����ͺ���
HAL_StatusTypeDef HAL_I2C_Slave_Transmit_DMA(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size)//I2C�ӻ�����DMA����
HAL_StatusTypeDef HAL_I2C_Slave_Transmit_IT(I2C_HandleTypeDef* hi2c, uint8_t* pData, uint16_t Size)//I2C�ӻ������жϺ���
void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef* hi2c)//I2C�ӻ�������ɻص�����
void HAL_I2C_SlaveTxCpltCallback(I2C_HandleTypeDef* hi2c)//I2C�ӻ�������ɻص�����
HAL_StatusTypeDef HAL_I2C_UnRegisterAddrCallback(I2C_HandleTypeDef* hi2c)//I2C��ַƥ��ص�ע������
HAL_StatusTypeDef HAL_I2C_UnRegisterCallback(I2C_HandleTypeDef* hi2c, HAL_I2C_CallbackIDTypeDef CallbackID)//I2C�жϻص�ע������
void I2C_ConvertOtherXferOptions(I2C_HandleTypeDef* hi2c)//I2C��������ѡ��ת������
void I2C_Disable_IRQ(I2C_HandleTypeDef* hi2c, uint16_t InterruptRequest)//I2C��ֹ�жϺ���
void I2C_DMAAbort(DMA_HandleTypeDef* hdma)//I2C DMA��ֹ����
void I2C_DMAError(DMA_HandleTypeDef* hdma)//I2C DMA������
void I2C_DMAMasterReceiveCplt(DMA_HandleTypeDef* hdma)//I2C DMA����������ɺ���
void I2C_DMAMasterTransmitCplt(DMA_HandleTypeDef* hdma)//I2C DMA����������ɺ���
void I2C_DMASlaveReceiveCplt(DMA_HandleTypeDef* hdma)//I2C DMA�ӻ�������ɺ���
void I2C_DMASlaveTransmitCplt(DMA_HandleTypeDef* hdma)//I2C DMA�ӻ�������ɺ���
void I2C_Enable_IRQ(I2C_HandleTypeDef* hi2c, uint16_t InterruptRequest)//I2Cʹ���жϺ���
void I2C_Flush_TXDR(I2C_HandleTypeDef* hi2c)//I2C���TXDR����
HAL_StatusTypeDef I2C_IsAcknowledgeFailed(I2C_HandleTypeDef* hi2c, uint32_t Timeout, uint32_t Tickstart)//I2C ACKʧ���жϺ���
void I2C_ITAddrCplt(I2C_HandleTypeDef* hi2c, uint32_t ITFlags)//I2C��ַƥ������жϺ���
void I2C_ITError(I2C_HandleTypeDef* hi2c, uint32_t ErrorCode)//I2C�����жϺ���
void I2C_ITListenCplt(I2C_HandleTypeDef* hi2c, uint32_t ITFlags)//I2C��������жϺ���
void I2C_ITMasterCplt(I2C_HandleTypeDef* hi2c, uint32_t ITFlags)//I2C�����ж�����жϺ���
void I2C_ITMasterSeqCplt(I2C_HandleTypeDef* hi2c)//I2C����������������жϺ���
void I2C_ITSlaveCplt(I2C_HandleTypeDef* hi2c, uint32_t ITFlags)//I2C�ӻ��ж�����жϺ���
void I2C_ITSlaveSeqCplt(I2C_HandleTypeDef* hi2c)//I2C�ӻ�������������жϺ���
HAL_StatusTypeDef I2C_Master_ISR_DMA(struct __I2C_HandleTypeDef* hi2c, uint32_t ITFlags, uint32_t ITSources)//I2C����DMA�жϷ�����
HAL_StatusTypeDef I2C_Master_ISR_IT(struct __I2C_HandleTypeDef* hi2c, uint32_t ITFlags, uint32_t ITSources)//I2C�����жϷ�����
HAL_StatusTypeDef I2C_RequestMemoryRead(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint32_t Timeout, uint32_t Tickstart)//I2C�ڴ��ȡ������
HAL_StatusTypeDef I2C_RequestMemoryWrite(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint32_t Timeout, uint32_t Tickstart)//I2C�ڴ�д��������
HAL_StatusTypeDef I2C_Slave_ISR_DMA(struct __I2C_HandleTypeDef* hi2c, uint32_t ITFlags, uint32_t ITSources)//I2C�ӻ�DMA�жϷ�����
HAL_StatusTypeDef I2C_Slave_ISR_IT(struct __I2C_HandleTypeDef* hi2c, uint32_t ITFlags, uint32_t ITSources)//I2C�ӻ��жϷ�����
void I2C_TransferConfig(I2C_HandleTypeDef* hi2c, uint16_t DevAddress, uint8_t Size, uint32_t Mode, uint32_t Request)//I2C�������ú���
HAL_StatusTypeDef I2C_WaitOnFlagUntilTimeout(I2C_HandleTypeDef* hi2c, uint32_t Flag, FlagStatus Status, uint32_t Timeout, uint32_t Tickstart)//I2C�ȴ���־����
HAL_StatusTypeDef I2C_WaitOnRXNEFlagUntilTimeout(I2C_HandleTypeDef* hi2c, uint32_t Timeout, uint32_t Tickstart)//I2C�ȴ��������ݿ��жϺ���
HAL_StatusTypeDef I2C_WaitOnSTOPFlagUntilTimeout(I2C_HandleTypeDef* hi2c, uint32_t Timeout, uint32_t Tickstart)//I2C�ȴ�ֹͣ��־����
HAL_StatusTypeDef I2C_WaitOnTXISFlagUntilTimeout(I2C_HandleTypeDef* hi2c, uint32_t Timeout, uint32_t Tickstart)//I2C�ȴ��������ݿ��жϺ���
