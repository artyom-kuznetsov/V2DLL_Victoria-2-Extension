// FUN_00548e90 @ 00548e90 body=[[00548e90, 00548ee9]]


void FUN_00548e90(undefined4 param_1)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  in_EAX[1] = 0x18d;
  *in_EAX = CTechnologyProject::vftable;
  in_EAX[2] = *(undefined4 *)(in_ECX + 8);
  in_EAX[3] = *(undefined4 *)(in_ECX + 0xc);
  in_EAX[4] = *(undefined4 *)(in_ECX + 0x10);
  in_EAX[5] = *(undefined4 *)(in_ECX + 0x14);
  in_EAX[6] = *(undefined4 *)(in_ECX + 0x18);
  *(undefined1 *)(in_EAX + 7) = 1;
  in_EAX[8] = 43800000;
  in_EAX[8] = DAT_01259abc;
  in_EAX[9] = *(undefined4 *)(in_ECX + 0x24);
  in_EAX[10] = param_1;
  in_EAX[0xb] = 0;
  *(undefined1 *)(in_EAX + 0xc) = 0;
  return;
}

