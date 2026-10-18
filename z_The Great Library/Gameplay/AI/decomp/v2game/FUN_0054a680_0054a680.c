// thunk_FUN_0068f390 @ 0054a680 body=[[0054a680, 0054a684]]


void thunk_FUN_0068f390(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  uint *unaff_EDI;
  
  puVar1 = (undefined4 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined4 *)*unaff_EDI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_00a513f0();
    }
    if ((undefined4 *)unaff_EDI[1] != (undefined4 *)0x0) {
      *(undefined4 *)unaff_EDI[1] =
           *(undefined4 *)(*unaff_EDI + ((int)in_EAX - (int)puVar2 >> 2) * 4);
      unaff_EDI[1] = unaff_EDI[1] + 4;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_00a513f0();
    }
    if ((undefined4 *)unaff_EDI[1] != (undefined4 *)0x0) {
      *(undefined4 *)unaff_EDI[1] = *in_EAX;
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 4;
  return;
}

