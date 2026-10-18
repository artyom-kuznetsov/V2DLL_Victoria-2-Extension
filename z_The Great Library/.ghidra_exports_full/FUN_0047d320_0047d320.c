// FUN_0047d320 @ 0047d320 body=[[0047d320, 0047d3b3]]


void FUN_0047d320(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 local_3c [12];
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined1 **local_28;
  int iStack_24;
  undefined1 *local_10 [3];
  
  if (param_2 == 0xb) {
    iStack_24 = param_1 + 0x22c;
    local_28 = local_10;
    local_2c = DAT_012587e4;
    uStack_30 = 0x47d3a0;
    puVar3 = (undefined4 *)FUN_0055c6c0();
    *(undefined4 *)(in_ECX + 8) = *puVar3;
    *(undefined4 *)(in_ECX + 0xc) = puVar3[1];
  }
  else if (param_2 == 0x2a1) {
    local_10[0] = local_3c;
    local_28 = (undefined1 **)0xf;
    local_2c = 0;
    local_3c[0] = 0;
    pcVar2 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
    FUN_0043bb10();
    return;
  }
  return;
}

