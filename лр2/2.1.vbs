dim s
do
  WScript.StdOut.WriteLine "----------------------------"
  WScript.StdOut.WriteLine "МЕНЮ:"
  WScript.StdOut.WriteLine "----------------------------"
  WScript.StdOut.WriteLine "1. Информация о авторе"
  WScript.StdOut.WriteLine "2. Переименование заданной папки"
  WScript.StdOut.WriteLine "3. Дата создания и размер заданного файла"
  WScript.StdOut.WriteLine "4. Выход"
  WScript.StdOut.Write "Выберите пункт меню:"

  s = WScript.StdIn.ReadLine

  Set FSO = WScript.CreateObject("Scripting.FileSystemObject")
  Set WshShell = WScript.CreateObject("WScript.Shell")
  if (s="1") Then
    WScript.StdOut.WriteLine "Житко Алина Сергеевна, ИТИ-11"
  elseif(s="2") Then
    WScript.StdOut.Write "Введите конечное имя файла:"
    f = WScript.StdIn.ReadLine
    Code=WshShell.Run("%COMSPEC% /c 0.cmd >"+f,0,true)
  elseif(s="3") Then
    Set Folder = FSO.GetFolder(WshShell.CurrentDirectory)
    f="Текущий каталог:"& Folder.Name & VbCrLf
    f= f & "Дата создания:"& Folder.DateCreated & VbCrLf
    FoldSize=Folder.Size/1024
    f = f & "Размер: " & FoldSize & " Кб" & VbCrLf
    WScript.Echo f
  End if
    loop until (s="4")
