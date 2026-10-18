// FUN_00a40db0 @ 00a40db0 body=[[00a40db0, 00a40e1a]]


int FUN_00a40db0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (in_EAX != param_1) {
    puVar2 = in_EAX + 9;
    puVar3 = (undefined4 *)(param_2 + 0x24);
    do {
      FUN_00408ed0(puVar2 + -9,0,0xffffffff);
      puVar3[-2] = puVar2[-2];
      puVar1 = puVar2 + 6;
      puVar3[-1] = puVar2[-1];
      param_2 = param_2 + 0x3c;
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3[3] = puVar2[3];
      puVar3[4] = puVar2[4];
      puVar3[5] = puVar2[5];
      puVar2 = puVar2 + 0xf;
      puVar3 = puVar3 + 0xf;
    } while (puVar1 != param_1);
  }
  return param_2;
}

