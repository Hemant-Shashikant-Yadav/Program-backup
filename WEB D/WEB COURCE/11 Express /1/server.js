
const express = require("express")

const app = express();

app.get("/",(request,response)=>{
    console.log(request);
    response.send("Hii")
})

app.get("/contact",(req,res)=>{
    res.send("Thes is contact page.\n Contact me here. ")
})
app.get("/about",(req,res)=>{
    res.send("Lorem ipsum dolor sit amet, consectetur adipisicing elit. Ipsa sapiente soluta porro? Similique deleniti facilis, aperiam quam soluta tempore consequatur perferendis facere beatae suscipit nobis ab laborum incidunt fuga laudantium necessitatibus rerum, mollitia sit doloribus. Laudantium voluptates non ut accusantium, neque commodi distinctio at. Accusamus corrupti delectus, quod repellendus, ratione totam natus cum accusantium architecto distinctio laboriosam fugit nihil? Corporis necessitatibus illo iusto quod ducimus fugit distinctio omnis fuga esse obcaecati laboriosam veniam sapiente explicabo provident, quis nam nesciunt error dolor vel pariatur voluptatibus voluptatum quibusdam voluptate? Fugiat soluta facilis, ut molestiae ullam aperiam minus illo! Soluta quis fugiat facere vero eos tempora similique totam vitae, provident esse ducimus mollitia quas iste voluptates beatae exercitationem et autem aspernatur. Enim cupiditate vero officia reprehenderit illum! Expedita neque aliquam, sunt enim id quae dignissimos deleniti quidem quo repellendus voluptates quibusdam placeat, qui officia eos tenetur facilis dolorem ut dolores libero possimus ullam quisquam autem! Provident voluptates saepe quam? Quibusdam, placeat veniam eligendi saepe cumque odio nihil quidem neque magni accusantium quo velit magnam quam! Vel asperiores iste inventore explicabo odit. Dolore accusantium, voluptates odio ullam iusto eius deserunt molestiae rerum aliquid optio ea quis voluptate earum harum natus tempore obcaecati voluptatibus sit veniam magni ipsam itaque! Nisi ipsam assumenda delectus adipisci dolor! Ut praesentium quae explicabo saepe rerum ipsum maxime facere inventore animi ipsam ex cum veritatis, suscipit asperiores blanditiis architecto totam labore nisi consectetur, illum deleniti ratione hic! Aut dignissimos, et quas neque sequi deserunt aperiam, reiciendis, perferendis omnis provident quos! Officiis, dolor doloribus! Facere voluptas rem nihil expedita aspernatur iusto doloremque. Alias culpa vel ratione atque, in ipsa quisquam esse blanditiis, ipsum provident repellendus eius iste. Error tempora labore molestias provident deleniti mollitia maxime fugiat numquam incidunt ut placeat voluptatem, facilis soluta et asperiores magni. Iure temporibus eveniet in explicabo.")
})


app.listen(3000,()=>{
    console.log("Server started running");
})