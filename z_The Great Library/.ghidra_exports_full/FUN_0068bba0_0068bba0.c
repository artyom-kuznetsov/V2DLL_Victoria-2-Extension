// FUN_0068bba0 @ 0068bba0 body=[[0068bba0, 0068bbdc] [0068bbe0, 0068bc87]]


int FUN_0068bba0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_20 [8];
  undefined4 local_18;
  int local_10;
  int local_c;
  
  puVar4 = (undefined4 *)(*(int *)(param_2 + 300) * 0x10 + *(int *)(param_1 + 0xb98));
  local_10 = 0;
  local_c = 0;
  if (0 < (int)puVar4[2]) {
    do {
      piVar1 = (int *)*puVar4;
      while (piVar1 != (int *)0x0) {
        iVar2 = *piVar1;
        piVar1 = (int *)piVar1[2];
        if (*(int *)(iVar2 + 0x30) == param_3) {
          if (*(int *)(param_3 + 0x100) == 6) {
            if ((*(int *)(param_3 + 0xf8) == 0) &&
               (*(int *)(iVar2 + 0x3c) == *(int *)(param_2 + 300))) {
              local_10 = iVar2;
            }
          }
          else {
            local_18 = *(undefined4 *)(iVar2 + 0x44);
            iVar3 = *(int *)(iVar2 + 0x48);
            iVar5 = FUN_004ead40(param_3,local_20,param_2,**(undefined4 **)(iVar2 + 0xa4),0);
            if (iVar3 == *(int *)(iVar5 + 4)) {
              return iVar2;
            }
          }
        }
      }
      local_c = local_c + 1;
      puVar4 = (undefined4 *)(*(int *)(param_2 + 300) * 0x10 + *(int *)(param_1 + 0xb98));
    } while (local_c < (int)puVar4[2]);
  }
  return local_10;
}

