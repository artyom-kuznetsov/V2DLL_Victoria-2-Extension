// FUN_006e0260 @ 006e0260 body=[[006e0260, 006e032f]]


void FUN_006e0260(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_ESI;
  undefined4 local_8;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  bVar1 = true;
  local_8 = 1;
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if ((*(int *)(param_2 + 0xc) < (int)puVar3[3]) ||
         ((*(int *)(param_2 + 0xc) <= (int)puVar3[3] &&
          (*(uint *)(param_2 + 0x10) < (uint)puVar3[4])))) {
        puVar2 = (undefined4 *)*puVar3;
        bVar1 = true;
        local_8 = 1;
      }
      else {
        puVar2 = (undefined4 *)puVar3[2];
        bVar1 = false;
        local_8 = 0;
      }
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if (bVar1) {
    if (puVar3 == (undefined4 *)**(int **)(param_1 + 4)) {
      puVar3 = (undefined4 *)FUN_004c9c20(&param_2,1,param_2);
      *unaff_ESI = *puVar3;
      *(undefined1 *)(unaff_ESI + 1) = 1;
      return;
    }
    FUN_0098c320();
  }
  if ((*(int *)(param_2 + 0xc) <= (int)puVar3[3]) &&
     ((*(int *)(param_2 + 0xc) < (int)puVar3[3] || (*(uint *)(param_2 + 0x10) <= (uint)puVar3[4]))))
  {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  puVar3 = (undefined4 *)FUN_004c9c20(&param_2,local_8,param_2);
  *unaff_ESI = *puVar3;
  *(undefined1 *)(unaff_ESI + 1) = 1;
  return;
}

