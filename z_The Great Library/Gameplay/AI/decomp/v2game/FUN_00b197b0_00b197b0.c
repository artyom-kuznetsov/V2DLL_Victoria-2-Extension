// FUN_00b197b0 @ 00b197b0 body=[[00b197b0, 00b19885]]


void FUN_00b197b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 *in_ECX;
  
  *in_ECX = 0x3f800000;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[5] = 0x3f800000;
  in_ECX[10] = 0x3f800000;
  in_ECX[0xf] = 0x3f800000;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[4] = *param_2;
  in_ECX[5] = param_2[1];
  in_ECX[6] = param_2[2];
  in_ECX[8] = *param_3;
  in_ECX[9] = param_3[1];
  in_ECX[10] = param_3[2];
  FID_conflict__memcpy(in_ECX + 0x10,in_ECX,0x40);
  uVar1 = FUN_00b19a30();
  *(undefined1 *)((int)in_ECX + 0x8d) = uVar1;
  in_ECX[0x21] = param_5;
  in_ECX[0x20] = param_4;
  in_ECX[0x22] = param_6;
  cVar2 = FUN_00b199e0(0x3727c5ac);
  *(char *)(in_ECX + 0x23) = cVar2;
  if (cVar2 == '\0') {
    FUN_00ad29c0();
  }
  return;
}

