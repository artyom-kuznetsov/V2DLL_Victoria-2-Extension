// FUN_00a2e250 @ 00a2e250 body=[[00a2e250, 00a2e462]]


void FUN_00a2e250(void)

{
  undefined4 *in_EAX;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  FUN_009f8e80();
  local_1c = DAT_00f092fc;
  in_EAX[0x78] = 0xc1200000;
  in_EAX[0x79] = 0x41200000;
  in_EAX[0x7a] = 0xc1200000;
  in_EAX[0x7b] = 0x41200000;
  local_8 = 0;
  in_EAX[0x7d] = 0x42480000;
  local_10 = 0;
  uStack_c = 0;
  local_20 = 0;
  in_EAX[0x3d] = local_1c;
  in_EAX[0xb] = 0;
  *in_EAX = &PTR_FUN_00e3fd98;
  in_EAX[0x3e] = 2;
  in_EAX[0x3f] = 0;
  in_EAX[0x40] = 0;
  in_EAX[0x41] = 0;
  in_EAX[0x42] = 0;
  in_EAX[0x43] = 0;
  in_EAX[0x44] = 0;
  in_EAX[0x45] = 0;
  in_EAX[0x46] = 0;
  in_EAX[0x47] = 0;
  in_EAX[0x48] = 0;
  in_EAX[0x49] = 0;
  in_EAX[0x4a] = 0;
  in_EAX[0x4b] = 0;
  in_EAX[0x4c] = 0;
  in_EAX[0x4d] = 0;
  in_EAX[0x4e] = 0;
  in_EAX[0x4f] = 0;
  in_EAX[0x50] = 0;
  in_EAX[0x53] = 0;
  in_EAX[0x54] = 0;
  in_EAX[0x55] = 0;
  in_EAX[0x56] = 0;
  in_EAX[0x57] = 0;
  in_EAX[0x51] = 0;
  in_EAX[0x52] = 0;
  in_EAX[0x7c] = local_1c;
  local_28 = 0xbf80000000000000;
  local_18 = 0;
  local_14 = 0;
  D3DXMatrixLookAtLH(in_EAX + 0x58,&local_10,&local_28,&local_1c);
  D3DXMatrixOrthoOffCenterLH
            (in_EAX + 0x68,in_EAX[0x78],in_EAX[0x79],in_EAX[0x7a],in_EAX[0x7b],in_EAX[0x7c],
             in_EAX[0x7d]);
  return;
}

