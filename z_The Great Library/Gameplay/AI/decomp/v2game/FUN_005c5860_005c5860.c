// FUN_005c5860 @ 005c5860 body=[[005c5860, 005c58be]]


void FUN_005c5860(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *in_EAX;
  int *unaff_EDI;
  
  puVar1 = (undefined2 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined2 *)*unaff_EDI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined2 *)unaff_EDI[2]) {
      FUN_005c58c0();
    }
    if ((undefined2 *)unaff_EDI[1] != (undefined2 *)0x0) {
      *(undefined2 *)unaff_EDI[1] =
           *(undefined2 *)(*unaff_EDI + ((int)in_EAX - (int)puVar2 >> 1) * 2);
      unaff_EDI[1] = unaff_EDI[1] + 2;
      return;
    }
  }
  else {
    if (puVar1 == (undefined2 *)unaff_EDI[2]) {
      FUN_005c58c0();
    }
    if ((undefined2 *)unaff_EDI[1] != (undefined2 *)0x0) {
      *(undefined2 *)unaff_EDI[1] = *in_EAX;
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 2;
  return;
}

