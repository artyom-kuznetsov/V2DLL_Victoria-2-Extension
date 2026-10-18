// FUN_00990e20 @ 00990e20 body=[[00990e20, 009910f5] [009910f9, 00991104]]


/* WARNING: Removing unreachable block (ram,0x00990f05) */

undefined4 FUN_00990e20(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined4 *******pppppppuVar3;
  undefined4 unaff_EBX;
  uint unaff_EDI;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 ******ppppppuStack_74;
  ushort uStack_70;
  undefined4 ******ppppppuStack_6c;
  undefined1 auStack_68 [8];
  uint uStack_60;
  uint uStack_58;
  char acStack_50 [76];
  
  if (*(char *)(in_ECX + 0x110) == '\x01') {
    *(undefined1 *)(in_ECX + 0x110) = 0;
    return *(undefined4 *)(in_ECX + 8);
  }
  cVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x24))();
  if (cVar1 == '\0') {
    return 0;
  }
  puVar5 = auStack_68;
  cVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0xc))(puVar5,2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar4 = (uint)uStack_70;
  if (uVar4 < 0x15) {
    if (uVar4 == 0x14) {
      *(undefined4 *)(in_ECX + 0xc) = 0xc;
      (**(code **)(**(int **)(in_ECX + 4) + 0xc))(&stack0xffffff88,4);
      __ui64toa((ulonglong)unaff_EDI,(char *)(in_ECX + 0x10),10);
      return 1;
    }
    switch(uVar4) {
    case 0xc:
      *(undefined4 *)(in_ECX + 0xc) = 0xc;
      (**(code **)(**(int **)(in_ECX + 4) + 0xc))(&stack0xffffff88,4);
      __itoa(unaff_EDI,(char *)(in_ECX + 0x10),10);
      return 1;
    case 0xd:
      *(undefined4 *)(in_ECX + 0xc) = 0xd;
      (**(code **)(**(int **)(in_ECX + 4) + 0xc))(&stack0xffffff88,4);
      FUN_00988c70(&ppppppuStack_74);
      iVar2 = 0;
      while( true ) {
        pppppppuVar3 = (undefined4 *******)ppppppuStack_74;
        if (uStack_60 < 0x10) {
          pppppppuVar3 = &ppppppuStack_74;
        }
        if (*(char *)((int)pppppppuVar3 + iVar2) == '\0') break;
        pppppppuVar3 = (undefined4 *******)ppppppuStack_74;
        if (uStack_60 < 0x10) {
          pppppppuVar3 = &ppppppuStack_74;
        }
        *(undefined1 *)(iVar2 + 0x10 + in_ECX) = *(undefined1 *)((int)pppppppuVar3 + iVar2);
        iVar2 = iVar2 + 1;
      }
      *(undefined1 *)(iVar2 + 0x10 + in_ECX) = 0;
      FUN_00408ad0();
      return 1;
    case 0xe:
      *(undefined4 *)(in_ECX + 0xc) = 0xe;
      (**(code **)(**(int **)(in_ECX + 4) + 0xc))(&stack0xffffff88,1);
      *(undefined2 *)(in_ECX + 0x10) = 0x6f6e;
      *(undefined1 *)(in_ECX + 0x12) = 0;
      return 1;
    case 0xf:
      *(undefined4 *)(in_ECX + 0xc) = 0xf;
      (**(code **)(**(int **)(in_ECX + 4) + 0xc))(&stack0xffffff88,2);
      (**(code **)(**(int **)(in_ECX + 4) + 0xc))(in_ECX + 0x10,unaff_EDI & 0xffff);
      *(undefined1 *)(((uint)puVar5 & 0xffff) + 0x10 + in_ECX) = 0;
      return 1;
    }
  }
  else if (uVar4 == 399) {
    *(undefined4 *)(in_ECX + 0xc) = 399;
    (**(code **)(**(int **)(in_ECX + 4) + 0xc))(&stack0xffffff88,8);
    __i64toa(CONCAT44(ppppppuStack_74,unaff_EBX),acStack_50,10);
    FUN_009885d0();
    iVar2 = 0;
    while( true ) {
      pppppppuVar3 = (undefined4 *******)ppppppuStack_6c;
      if (uStack_58 < 0x10) {
        pppppppuVar3 = &ppppppuStack_6c;
      }
      if (*(char *)((int)pppppppuVar3 + iVar2) == '\0') break;
      pppppppuVar3 = (undefined4 *******)ppppppuStack_6c;
      if (uStack_58 < 0x10) {
        pppppppuVar3 = &ppppppuStack_6c;
      }
      *(undefined1 *)(iVar2 + 0x10 + in_ECX) = *(undefined1 *)((int)pppppppuVar3 + iVar2);
      iVar2 = iVar2 + 1;
    }
    goto LAB_009910e6;
  }
  *(uint *)(in_ECX + 0xc) = uVar4;
  FUN_00990880();
  iVar2 = 0;
  while( true ) {
    pppppppuVar3 = (undefined4 *******)ppppppuStack_6c;
    if (uStack_58 < 0x10) {
      pppppppuVar3 = &ppppppuStack_6c;
    }
    if (*(char *)((int)pppppppuVar3 + iVar2) == '\0') break;
    pppppppuVar3 = (undefined4 *******)ppppppuStack_6c;
    if (uStack_58 < 0x10) {
      pppppppuVar3 = &ppppppuStack_6c;
    }
    *(undefined1 *)(iVar2 + 0x10 + in_ECX) = *(undefined1 *)((int)pppppppuVar3 + iVar2);
    iVar2 = iVar2 + 1;
  }
LAB_009910e6:
  *(undefined1 *)(iVar2 + 0x10 + in_ECX) = 0;
  if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(ppppppuStack_6c);
  }
  return 1;
}

