// FUN_004c9b50 @ 004c9b50 body=[[004c9b50, 004c9c02]]


void FUN_004c9b50(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  bool bVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  bVar3 = true;
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      bVar3 = *(uint *)(param_2 + 0xc) < (uint)puVar2[3];
      if (bVar3) {
        puVar1 = (undefined4 *)*puVar2;
      }
      else {
        puVar1 = (undefined4 *)puVar2[2];
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  if (bVar3) {
    if (puVar2 == (undefined4 *)**(int **)(param_1 + 4)) {
      puVar2 = (undefined4 *)FUN_004c9c20(&param_2,1,param_2);
      *unaff_ESI = *puVar2;
      *(undefined1 *)(unaff_ESI + 1) = 1;
      return;
    }
    FUN_0098c320();
  }
  if ((uint)puVar2[3] < *(uint *)(param_2 + 0xc)) {
    puVar2 = (undefined4 *)FUN_004c9c20(&param_2,bVar3,param_2);
    *unaff_ESI = *puVar2;
    *(undefined1 *)(unaff_ESI + 1) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_2);
}

