// FUN_009f6740 @ 009f6740 body=[[009f6740, 009f6853]]


void FUN_009f6740(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int *piVar5;
  
  FUN_00409350(&DAT_00ded94d,0);
  if (*(ushort *)(in_ECX + 0xe) == 0) {
    if (*(short *)((int)in_ECX + 0x3a) != 0) {
      *(short *)((int)in_ECX + 0x3a) = *(short *)((int)in_ECX + 0x3a) + -1;
      (**(code **)(*in_ECX + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x009f6780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*in_ECX + 0x94))();
      return;
    }
  }
  else {
    iVar3 = FUN_009f7c00(*(undefined2 *)((int)in_ECX + 0x3a),*(ushort *)(in_ECX + 0xe) - 1);
    piVar5 = in_ECX + 6;
    piVar4 = piVar5;
    if (0xf < (uint)in_ECX[0xb]) {
      piVar4 = (int *)*piVar5;
    }
    if (*(char *)((int)piVar4 + iVar3) == '!') {
      *(short *)(in_ECX + 0xe) = (short)in_ECX[0xe] + -1;
    }
    else {
      iVar3 = FUN_009f7410((short)in_ECX[0xe]);
      if (iVar3 != 0) {
        sVar2 = FUN_009f7410((short)in_ECX[0xe]);
        *(short *)(in_ECX + 0xe) = sVar2 + 1;
        return;
      }
      if (*(short *)((int)in_ECX + 0x3a) == 0) {
        (**(code **)(*in_ECX + 0x90))();
      }
      iVar3 = FUN_009f7c00(*(undefined2 *)((int)in_ECX + 0x3a),0);
      if (iVar3 != 0) {
        if (0xf < (uint)in_ECX[0xb]) {
          piVar5 = (int *)*piVar5;
        }
        cVar1 = *(char *)((int)piVar5 + iVar3 + -1);
        if ((((cVar1 != ' ') && (cVar1 != '!')) && (cVar1 != '\n')) && (cVar1 != '\t')) {
          (**(code **)(*in_ECX + 0x78))();
          (**(code **)(*in_ECX + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x009f6852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*in_ECX + 0x94))();
          return;
        }
        *(undefined2 *)(in_ECX + 0xe) = 0;
        return;
      }
    }
  }
  return;
}

