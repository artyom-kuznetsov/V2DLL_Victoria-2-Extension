// FUN_0068fb80 @ 0068fb80 body=[[0068fb80, 0068fc5e]]


void FUN_0068fb80(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_0068fc10:
      if (1 < iVar1) {
        FUN_00690b30(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_006909f0(param_2,param_4);
        }
        FUN_00690ae0(param_4);
        return;
      }
      goto LAB_0068fc10;
    }
    FUN_00690050(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_c - param_1 & 0xfffffffcU) < (int)(param_2 - local_8 & 0xfffffffcU)) {
      FUN_0068fb80(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_0068fb80(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

