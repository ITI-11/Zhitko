dim s
do
  WScript.StdOut.WriteLine "----------------------------"
  WScript.StdOut.WriteLine "����:"
  WScript.StdOut.WriteLine "----------------------------"
  WScript.StdOut.WriteLine "1. ���������� � ������"
  WScript.StdOut.WriteLine "2. �������������� �������� �����"
  WScript.StdOut.WriteLine "3. ���� �������� � ������ ��������� �����"
  WScript.StdOut.WriteLine "4. �����"
  WScript.StdOut.Write "�������� ����� ����:"

  s = WScript.StdIn.ReadLine

  Set FSO = WScript.CreateObject("Scripting.FileSystemObject")
  Set WshShell = WScript.CreateObject("WScript.Shell")
  if (s="1") Then
    WScript.StdOut.WriteLine "����� ����� ���������, ���-11"
  elseif(s="2") Then
    WScript.StdOut.Write "������� �������� ��� �����:"
    f = WScript.StdIn.ReadLine
    Code=WshShell.Run("%COMSPEC% /c 0.cmd >"+f,0,true)
  elseif(s="3") Then
    Set Folder = FSO.GetFolder(WshShell.CurrentDirectory)
    f="������� �������:"& Folder.Name & VbCrLf
    f= f & "���� ��������:"& Folder.DateCreated & VbCrLf
    FoldSize=Folder.Size/1024
    f = f & "������: " & FoldSize & " ��" & VbCrLf
    WScript.Echo f
  End if
    loop until (s="4")
