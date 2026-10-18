// FUN_004439d0 @ 004439d0 body=[[004439d0, 004439fc] [00443a00, 00443ab6] [00443aba, 00443ad5] [00443ad9, 00443aef] [00443af3, 00443b07]]


uint FUN_004439d0(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined4 local_74 [5];
  uint local_60;
  uint local_58;
  undefined4 local_48;
  uint local_44;
  uint local_3c;
  undefined4 local_2c;
  uint local_28;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b407d8;
  local_10 = ExceptionList;
  local_14 = (int *)(in_ECX + 0x54);
  local_18 = 0;
  ExceptionList = &local_10;
  do {
    iVar4 = 0;
    iVar5 = local_14[1] - *local_14 >> 2;
    if (0 < iVar5) {
      do {
        piVar1 = *(int **)(*local_14 + iVar4 * 4);
        cVar3 = (**(code **)*piVar1)(param_1);
        if (cVar3 != '\0') {
          iVar4 = (**(code **)(*piVar1 + 4))(local_74,param_1);
          local_8 = 0;
          FUN_00408ed0(iVar4,0,0xffffffff);
          FUN_00408ed0(iVar4 + 0x1c,0,0xffffffff);
          FUN_00408ed0(iVar4 + 0x38,0,0xffffffff);
          uVar2 = *(undefined4 *)(iVar4 + 0x54);
          *(undefined4 *)(param_2 + 0x54) = uVar2;
          *(undefined1 *)(param_2 + 0x58) = *(undefined1 *)(iVar4 + 0x58);
          if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_3c);
          }
          local_28 = 0xf;
          local_2c = 0;
          local_3c = local_3c & 0xffffff00;
          if (local_44 < 0x10) {
            local_44 = 0xf;
            local_48 = 0;
            local_58 = local_58 & 0xffffff00;
            if (local_60 < 0x10) {
              ExceptionList = local_10;
              return CONCAT31((int3)((uint)uVar2 >> 8),1);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_74[0]);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_58);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
    local_18 = local_18 + 1;
    local_14 = local_14 + 4;
    if (4 < local_18) {
      ExceptionList = local_10;
      return (uint)local_14 & 0xffffff00;
    }
  } while( true );
}

