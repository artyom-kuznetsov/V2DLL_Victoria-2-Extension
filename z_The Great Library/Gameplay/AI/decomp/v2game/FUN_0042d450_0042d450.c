// FUN_0042d450 @ 0042d450 body=[[0042d450, 0042d518]]


void FUN_0042d450(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  int local_c;
  int local_8;
  
  FUN_00425f80(&local_8);
  FUN_00425f80(&local_c);
  if (local_c < local_8) {
    uVar1 = *unaff_ESI;
    uVar2 = unaff_ESI[1];
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[1] = unaff_EDI[1];
    *unaff_EDI = uVar1;
    unaff_EDI[1] = uVar2;
  }
  FUN_00425f80(&local_c);
  FUN_00425f80(&local_8);
  if (local_8 < local_c) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *param_1 = *unaff_ESI;
    param_1[1] = unaff_ESI[1];
    *unaff_ESI = uVar1;
    unaff_ESI[1] = uVar2;
  }
  FUN_00425f80(&local_c);
  FUN_00425f80(&local_8);
  if (local_8 < local_c) {
    uVar1 = *unaff_ESI;
    uVar2 = unaff_ESI[1];
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[1] = unaff_EDI[1];
    *unaff_EDI = uVar1;
    unaff_EDI[1] = uVar2;
  }
  return;
}

