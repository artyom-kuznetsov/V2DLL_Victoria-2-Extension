// FUN_004cd7f0 @ 004cd7f0 body=[[004cd7f0, 004cd84a]]


void FUN_004cd7f0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_ESI;
  int *unaff_EDI;
  
  if (unaff_EDI != (int *)0x0) {
    *(undefined1 *)(unaff_EDI + 1) = 1;
    iVar1 = unaff_ESI[1];
    puVar3 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = unaff_EDI;
      puVar3[1] = iVar1;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 3) = 0;
    }
    iVar2 = unaff_ESI[2];
    unaff_ESI[1] = puVar3;
    unaff_ESI[2] = iVar2 + 1;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar1 + 8) = puVar3;
      (**(code **)(*unaff_EDI + 0x10))();
      return;
    }
    *unaff_ESI = puVar3;
    (**(code **)(*unaff_EDI + 0x10))();
  }
  return;
}

