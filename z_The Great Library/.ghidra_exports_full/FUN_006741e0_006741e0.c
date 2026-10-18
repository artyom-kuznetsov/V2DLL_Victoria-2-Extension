// FUN_006741e0 @ 006741e0 body=[[006741e0, 006742a2] [006742a6, 006742bf] [006742c3, 006742cd]]


undefined4 FUN_006741e0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  LPSTR ***lpsz;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  LPSTR **local_20 [4];
  DWORD local_10;
  uint local_c;
  
  iVar2 = (*(int *)(param_1 + 0x6fc) - *(int *)(param_1 + 0x6f8)) / 0x1c;
  iVar6 = 0;
  if (0 < iVar2) {
    local_c = 0xf;
    local_10 = 0;
    local_20[0] = (LPSTR **)((uint)local_20[0] & 0xffffff00);
    FUN_00408ed0(param_2,0,0xffffffff);
    lpsz = (LPSTR ***)local_20[0];
    if (local_c < 0x10) {
      lpsz = local_20;
    }
    CharLowerBuffA((LPSTR)lpsz,local_10);
    if (0 < iVar2) {
      param_2 = 0;
      do {
        pcVar3 = (char *)(*(int *)(param_1 + 0x6f8) + param_2);
        if (0xf < *(uint *)(pcVar3 + 0x14)) {
          pcVar3 = *(char **)pcVar3;
        }
        pcVar4 = pcVar3;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        iVar5 = FUN_005484e0(local_20,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
        if (iVar5 == -1) {
          if (local_c < 0x10) {
            return 0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_20[0]);
        }
        param_2 = param_2 + 0x1c;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
    }
    if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_20[0]);
    }
  }
  return 1;
}

