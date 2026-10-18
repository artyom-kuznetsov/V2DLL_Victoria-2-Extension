// FUN_00a32f00 @ 00a32f00 body=[[00a32f00, 00a32ff4] [00a32ff8, 00a3303e] [00a33042, 00a330b5] [00a330b9, 00a330cb]]


void FUN_00a32f00(int *param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  tm *_Tm;
  char *pcVar4;
  undefined4 uVar5;
  int in_ECX;
  int in_EDX;
  undefined *puVar6;
  char local_78 [32];
  undefined4 local_58 [5];
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  __time64_t local_20 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b77d28;
  local_10 = ExceptionList;
  if (*(int *)(param_2 + 0x10) != 0) {
    pcVar4 = (&PTR_DAT_00f07898)[in_ECX];
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_10;
    FUN_00409350(pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));
    local_8 = 0;
    if (param_3 != '\0') {
      __time64(local_20);
      _Tm = FID_conflict___localtime64((__time32_t *)local_20);
      _strftime(local_78,0x20,"[%H:%M]",_Tm);
      pcVar4 = local_78;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00448740(local_78,(int)pcVar4 - (int)(local_78 + 1));
      if (in_EDX == -1) {
        uVar5 = FUN_00475d50(local_58);
        local_8._0_1_ = 1;
        FUN_00448aa0(uVar5,0,0xffffffff);
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_58[0]);
        }
        uVar5 = 2;
        puVar6 = &DAT_00df9638;
      }
      else {
        uVar5 = FUN_00a32ba0();
        uVar5 = FUN_00988fa0(uVar5);
        local_8._0_1_ = 2;
        FUN_00448aa0(uVar5,0,0xffffffff);
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_58[0]);
        }
        uVar5 = 4;
        puVar6 = &DAT_00e402d0;
      }
      FUN_00448740(puVar6,uVar5);
    }
    FUN_00448aa0(param_2,0,0xffffffff);
    FUN_00868200(local_3c);
    FUN_00a31b50(*param_1);
    if ((*(int *)(*param_1 + 0xd8) == param_1[0xd]) &&
       (*(char *)(*(int *)(*param_1 + 0x30) + 0x67) != '\0')) {
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
    else {
      iVar2 = param_1[0x14];
      *(undefined1 *)(param_1 + 0x14) = 1;
      if ((char)iVar2 != '\x01') {
        FUN_00a317b0();
      }
    }
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

