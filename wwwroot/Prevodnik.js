/*function download(filename, text) {
    var element = document.createElement('a');
    element.setAttribute('href', 'data:text/plain;charset=utf-8,' + encodeURIComponent(text));
    element.setAttribute('download', filename);

    element.style.display = 'none';
    document.body.appendChild(element);

    element.click();

    document.body.removeChild(element);
}
var relativePosition;
$(".vertical_line_container").mousemove(function (e) {
    relativePosition = {
        left: e.pageX - $(document).scrollLeft() - $('#canvas').offset().left,
        top: e.pageY - $(document).scrollTop() - $('#canvas').offset().top
    };
    //$('#mousepos').html('<p>x: ' + relativePosition.left + ' y: ' + relativePosition.top + ' </p>');
});
*/
function get_position(e) {
    var posX = e.pageX - $(document).scrollLeft() - $('.vertical_line_container').offset().left
    return posX;
}

function scrollTimeline() {
    var divElement = document.getElementByClassName("vertical_line_container");
    divElement.scroll({
        left: divElement.scrollLeft(divElement.scrollLeft() + divElement.scrollLeft()),//scroll to the bottom of the element
        behavior: 'smooth' //auto, smooth, initial, inherit
    });
}
function alert (message) {
    alert(message);
}
function recursive_offset() {
    var aobj = document.getElementsByClassName("vertical_line_container");
    var currOffset = {
        x: 0,
        y: 0
    }
    var newOffset = {
        x: 0,
        y: 0
    }

    if (aobj !== null) {

        if (aobj.scrollLeft) {
            currOffset.x = aobj.scrollLeft;
        }

        if (aobj.scrollTop) {
            currOffset.y = aobj.scrollTop;
        }

        if (aobj.offsetLeft) {
            currOffset.x -= aobj.offsetLeft;
        }

        if (aobj.offsetTop) {
            currOffset.y -= aobj.offsetTop;
        }

        if (aobj.parentNode !== undefined) {
            newOffset = recursive_offset(aobj.parentNode);
        }

        currOffset.x = currOffset.x + newOffset.x;
        currOffset.y = currOffset.y + newOffset.y;
        console.log(aobj.id + ' x' + currOffset.x + ' y' + currOffset.y);
    }
    return currOffset.x;
}