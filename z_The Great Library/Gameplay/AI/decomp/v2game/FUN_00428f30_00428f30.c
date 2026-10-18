// FUN_00428f30 @ 00428f30 body=[[00428f30, 00429216]]


void FUN_00428f30(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int local_8c;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  int local_48;
  
  if (param_2 < 0x9e7) {
    if (param_2 == 0x9e6) {
      FUN_0055c6c0(DAT_012587e4,local_70,param_1 + 0x22c);
      FUN_004d61d0();
      return;
    }
    if (param_2 < 0x351) {
      if (param_2 == 0x350) {
        puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_60,param_1 + 0x22c);
        *(undefined4 *)(in_ECX + 0x1c) = *puVar1;
        *(undefined4 *)(in_ECX + 0x20) = puVar1[1];
        return;
      }
      if (param_2 == 0x1ca) {
        uVar2 = FUN_00aaf0c5(param_1 + 0x22c);
        *(undefined4 *)(in_ECX + 8) = uVar2;
        return;
      }
      if (param_2 == 0x34f) {
        puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_50,param_1 + 0x22c);
        *(undefined4 *)(in_ECX + 0x14) = *puVar1;
        *(undefined4 *)(in_ECX + 0x18) = puVar1[1];
        return;
      }
    }
    else {
      if (param_2 == 0x4a2) {
        local_8c = -1;
        iVar3 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&local_8c);
        if (iVar3 == 0) {
          FUN_009a1140();
        }
        if (local_8c < 0) {
          return;
        }
        *(undefined4 *)(in_ECX + 0xc) =
             *(undefined4 *)(*(int *)(DAT_0125870c + 0x2a88) + local_8c * 4);
        return;
      }
      if (param_2 == 0x5a3) {
        FUN_009a1ce0();
        return;
      }
    }
  }
  else {
    switch(param_2) {
    case 0x9e7:
      FUN_0055c6c0(DAT_012587e4,local_88,param_1 + 0x22c);
      FUN_004d61d0();
      return;
    case 0x9ec:
      FUN_0055c6c0(DAT_012587e4,local_80,param_1 + 0x22c);
      FUN_004d61d0();
      return;
    case 0x9f1:
      FUN_0094bd40();
      (**(code **)(local_48 + 0xc))(param_1);
      FUN_0042c2f0();
      return;
    case 0x9f2:
      FUN_0094bd40();
      (**(code **)(local_48 + 0xc))(param_1);
      FUN_0042c2f0();
      return;
    case 0x9f3:
      FUN_0055c6c0(DAT_012587e4,local_68,param_1 + 0x22c);
      FUN_004d61d0();
      return;
    case 0x9f4:
      FUN_0055c6c0(DAT_012587e4,local_58,param_1 + 0x22c);
      FUN_004d61d0();
      return;
    case 0x9f5:
      puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_78,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x5c) = *puVar1;
      *(undefined4 *)(in_ECX + 0x60) = puVar1[1];
      return;
    case 0x9fd:
      FUN_009a1bb0(in_ECX + 0xb0);
      return;
    case 0xa4d:
      FUN_009a1bb0(in_ECX + 100);
      return;
    }
  }
  FUN_009a0f40();
  return;
}

