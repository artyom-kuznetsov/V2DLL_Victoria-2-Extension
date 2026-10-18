// FUN_004917c0 @ 004917c0 body=[[004917c0, 0049197f]]


void FUN_004917c0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int in_ECX;
  int iVar4;
  undefined4 local_38;
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  if (param_2 < 0x2f6) {
    if (param_2 == 0x2f5) {
      iVar4 = in_ECX + 0x60;
    }
    else {
      if (param_2 == 0x1a) {
        pcVar3 = (char *)(param_1 + 0x22c);
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        ExceptionList = &local_14;
        FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0xd9) {
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = 0;
        local_c = 0;
        ExceptionList = &local_14;
        FUN_009a1750(local_34,0);
        FUN_005c1a10();
        uVar2 = FUN_005c2ad0(local_34);
        *(undefined4 *)(in_ECX + 0x88) = uVar2;
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 != 0x1d4) goto LAB_004918d4;
      iVar4 = in_ECX + 0x90;
    }
  }
  else {
    if (param_2 != 0x2f9) {
      if (param_2 == 0x42e) {
        local_38 = 0;
        ExceptionList = &local_14;
        iVar4 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&local_38);
        if (iVar4 == 0) {
          FUN_009a1140();
        }
        *(undefined2 *)(in_ECX + 0x84) = (undefined2)local_38;
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x944) {
        ExceptionList = &local_14;
        FUN_009a1c10();
        ExceptionList = local_14;
        return;
      }
LAB_004918d4:
      ExceptionList = &local_14;
      FUN_00491280(param_1,param_2);
      ExceptionList = local_14;
      return;
    }
    iVar4 = in_ECX + 0x58;
  }
  ExceptionList = &local_14;
  FUN_009a19f0(param_1,iVar4);
  ExceptionList = local_14;
  return;
}

