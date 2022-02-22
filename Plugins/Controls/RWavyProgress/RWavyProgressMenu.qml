import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Controls.Material 2.12
import "qrc:/Controls/library"
import "../library"

Item {
   id:rWavyProgressMenu


   property var allctx: {null}

   BasicMenu{
       id:basicMenu
       anchors{
           top: parent.top
       }
   }
   OriginMenu{
       id:originMenu
       anchors{
           top : basicMenu.bottom

       }
   }
   //参数设置
   Column{
       id:argumentMenu
       //height: opened ? 80 :40
       anchors{
           right: parent.right
           rightMargin: 10
           left: parent.left
           leftMargin: 10
           top: originMenu.bottom
       }
       width: parent.width
       spacing: 10
       property bool opened: true
       clip: true

       Rectangle{
           width: argumentMenu.width
           height: 30
           radius: 10
           color: "#FF9900"
           MouseArea{
               anchors.fill: parent
               onClicked: {
                   argumentMenu.opened = !argumentMenu.opened
               }
           }
           Text {
               anchors{
                   left: parent.left
                   leftMargin: 10
                   verticalCenter: parent.verticalCenter
               }
               font.pixelSize : 20
               font.bold: true
               color: "white"
               text:"水纹能量槽参数"
           }
           Image {
               anchors{
                   right: parent.right
                   rightMargin: 10
                   verticalCenter: parent.verticalCenter
               }
               source: argumentMenu.opened ? "qrc:/Controls/library/Image/leftclose.png" : "qrc:/Controls/library/Image/downopen.png"
           }
       }
       Rectangle{
           width: argumentMenu.width
           height: 30
           color: "transparent"
           opacity: 0.7
           radius: 5
           visible: argumentMenu.opened
           border.width: 1
           border.color: "white"
           Rectangle{
               id: textmin
               anchors{
                   top: parent.top
                   bottom: parent.bottom
                   left: parent.left
               }
               width: 180
               radius: 5
               opacity: 0.7
               Text {

                   anchors{
                       left: parent.left
                       leftMargin: 10
                       verticalCenter: parent.verticalCenter
                   }
                   text: "能量槽最低值(0%):"
                   font.pixelSize : 18
                   font.bold: true
                   color: "white"
               }

           }
           TextInput{
               id:minVal
               anchors{
                   left: textmin.right
                   leftMargin: 10
                   verticalCenter: parent.verticalCenter
                   right: parent.right
               }
               text: "0"
               font.pixelSize : 18
               font.bold: true
               color: "white"
               validator: RegExpValidator{
                   regExp: /[0-9-.]+/
               }
               inputMethodHints: Qt.ImhFormattedNumbersOnly

               maximumLength: 8
               onTextChanged: {

               }
           }
       }
       Rectangle{
           width: argumentMenu.width
           height: 30
           color: "transparent"
           opacity: 0.7
           radius: 5
           visible: argumentMenu.opened
           border.width: 1
           border.color: "white"
           Rectangle{
               id: textmax
               anchors{
                   top: parent.top
                   bottom: parent.bottom
                   left: parent.left
               }
               width: 180
               radius: 5
               opacity: 0.7
               Text {

                   anchors{
                       left: parent.left
                       leftMargin: 10
                       verticalCenter: parent.verticalCenter
                   }
                   text: "能量槽最高值(100%):"
                   font.pixelSize : 18
                   font.bold: true
                   color: "white"
               }

           }
           TextInput{
               id:maxVal
               anchors{
                   left: textmax.right
                   leftMargin: 10
                   verticalCenter: parent.verticalCenter
                   right: parent.right
               }
               text: "100"
               font.pixelSize : 19
               font.bold: true
               color: "white"
               validator: RegExpValidator{
                   regExp: /[0-9-.]+/
               }
               inputMethodHints: Qt.ImhFormattedNumbersOnly

               maximumLength: 8
               onTextChanged: {

               }
           }
       }

//       Button{
//           onClicked: {
//               var eee = getArgument_ctx()
//               eee.minVal = 20
//               eee.maxVal = 120
//               console.debug(eee.minVal)
//               setArgument_ctx(eee)
//           }
//       }
   }


   //这个控件特有的
   function getArgument_ctx()
   {
       var ctx = {
           "minVal": minVal.text,
           "maxVal": maxVal.text
       }
       console.debug(minVal.text, maxVal.text)
       return ctx
   }
   function setArgument_ctx(ctx)
   {
       minVal.text = ctx.minVal
       maxVal.text = ctx.maxVal
   }
   //所有的上下文
   function getAll_ctx()
   {
       var ctx =
               {
            "basic": basicMenu.getBasic_ctx(),
            "origin": originMenu.getOrigin_ctx(),
            "argument": getArgument_ctx()
       }
       return ctx
   }
   function setAll_ctx(ctx)
   {
       basicMenu.setBasic_ctx(   ctx.basic  )
       originMenu.setOrigin_ctx(   ctx.origin )
       setArgument_ctx( ctx.argument )
   }


   //创建后显示上下文
   Component.onCompleted: {
      // console.debug(allctx.basic.name+"名字")
       setAll_ctx(allctx)
   }
   //销毁后把上下文返回
   Component.onDestruction: print("Destroying second item")






}
