// FUN_00b09700 @ 00b09700 body=[[00b09700, 00b097ab]]


void FUN_00b09700(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  *(undefined1 *)(in_ECX + 0x10) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((int)in_ECX + 0x41) = *(undefined1 *)((int)param_1 + 0x41);
  *(undefined1 *)((int)in_ECX + 0x42) = *(undefined1 *)((int)param_1 + 0x42);
  *(undefined1 *)((int)in_ECX + 0x43) = *(undefined1 *)((int)param_1 + 0x43);
  *(undefined1 *)(in_ECX + 0x11) = *(undefined1 *)(param_1 + 0x11);
  *(undefined1 *)((int)in_ECX + 0x45) = *(undefined1 *)((int)param_1 + 0x45);
  *(undefined1 *)((int)in_ECX + 0x46) = *(undefined1 *)((int)param_1 + 0x46);
  *(undefined1 *)((int)in_ECX + 0x47) = *(undefined1 *)((int)param_1 + 0x47);
  *(undefined1 *)(in_ECX + 0x12) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)((int)in_ECX + 0x49) = *(undefined1 *)((int)param_1 + 0x49);
  return;
}

