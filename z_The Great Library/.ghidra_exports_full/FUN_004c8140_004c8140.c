// FUN_004c8140 @ 004c8140 body=[[004c8140, 004c81e8] [004c81f7, 004c8238] [004c8247, 004c8285]]


void FUN_004c8140(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)(param_1 + 0x15c);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    FUN_009962f0(*(int *)(param_1 + 0x24) + 0x11dc);
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x15);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar6 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar6 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x15c) + 4);
  if (*(char *)(iVar5 + 0x15) == '\0') {
    FUN_00aa9f30(*(undefined4 *)(iVar5 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar5);
  }
  *(int *)(*(int *)(param_1 + 0x15c) + 4) = *(int *)(param_1 + 0x15c);
  *(undefined4 *)*(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(int *)(*(int *)(param_1 + 0x15c) + 8) = *(int *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x14c) + 4);
  if (*(char *)(iVar5 + 0x15) == '\0') {
    FUN_00aa9f30(*(undefined4 *)(iVar5 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar5);
  }
  *(int *)(*(int *)(param_1 + 0x14c) + 4) = *(int *)(param_1 + 0x14c);
  *(undefined4 *)*(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(int *)(*(int *)(param_1 + 0x14c) + 8) = *(int *)(param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x150) = 0;
  _memset((void *)(param_1 + 0x1e0),0,0x150);
  FUN_004c7600(param_1);
  return;
}

